import React from 'react';
import{
    BrowserRouter as Router,
    Routes,
    Route,
    Link
}
from 'react-router-dom'
import Home from "./01home"
import About from "./02about"
function navbar(props) {
    const menu ={'/home':'Home','/about':'About'}
    console.log(menu);
    const returnData = Object.entries(menu).map((res,i)=>{
      return <li className="nav-item" key={i}>
            <Link className="nav-link active" to={res[0]}>{res[1]}</Link>
        </li>
    })
    return (
        <>
        <Router>
        <nav className="navbar navbar-expand-lg navbar-light bg-light">
        <div className="container-fluid">
          <a className="navbar-brand" href="#">Navbar</a>
          <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNavDropdown" aria-controls="navbarNavDropdown" aria-expanded="false" aria-label="Toggle navigation">
            <span className="navbar-toggler-icon"></span>
          </button>
          <div className="collapse navbar-collapse" id="navbarNavDropdown">
            <ul className="navbar-nav">
                {returnData}      
            </ul>
          </div>
        </div>
      </nav>
      <Routes>
        <Route path='/home' element={<Home/>} />
        <Route path='/about' element={<About/>} />
      </Routes>
      </Router>
      </>
    );
}

export default navbar;