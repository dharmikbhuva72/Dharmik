import React from 'react';
import{
    BrowserRouter as Router,
    Routes,
    Route,
    Link
}
from 'react-router-dom'
import Home from './01home'
import About from './02about'
import Compo from './05Compo';
function Header(props) {
    const Menu = {"/home":"Home","about":"About","/compo":"Compo"}

    const Data = Object.entries(Menu).map((res,i)=>{
    return  <li className="nav-item" key={i}>
                <Link className="nav-link active" to={res[0]} >{res[1]}</Link>
            </li>
    })
    return (
        <div>
            <Router>
            <nav className="navbar navbar-expand-lg navbar-light bg-light ">
                <div className="container-fluid  bg-dark">
                    <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
                    <span className="navbar-toggler-icon"></span>
                    </button>
                    <div className="collapse navbar-collapse bg-primary " id="navbarNav">
                    <ul className="navbar-nav text-center">
                        {Data}
                    </ul>
                    </div>
                </div>
            </nav>
            <Routes>
                <Route path='/home' element={<Home/>}/>
                <Route path='/about' element={<About/>}/>
                <Route path='/compo' element={<Compo/>}/>
            </Routes>
            </Router>
        </div>
    );
}

export default Header;