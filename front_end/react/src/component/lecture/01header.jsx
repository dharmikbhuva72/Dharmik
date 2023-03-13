import React from 'react';
  import{
    BrowserRouter as Router,
    Routes,
    Route,
    Link
}
from "react-router-dom";
import Demo from './03demo';
import Home from './02home';
import Props from "./04props"
import Life from "./07lifecycle"
 import API from "./08api"
// import Button from "./09buttonClick"
import Usestate from './function/01usestate';
import UseEffect from './function/10UseEffect';
import UseEf from "./function/11useEffect"
import UseREducer from './function/12useREducer';
import Useref from './function/useref'
function header(props) {
    const Menu ={'/demo':'Demo','home':'Home','/props':'Props','/life':"Life","api":"API","button":"Button","usestate":"Usestate","useeffect":"Useeffact","useEf":"UseEf","useREducer":"UseREducer","useref":"Useref"}

    const returnData = Object.entries(Menu).map((res,i)=>{
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
    <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
      <span className="navbar-toggler-icon"></span>
    </button>
    <div className="collapse navbar-collapse" id="navbarNav">
      <ul className="navbar-nav">

        {returnData}
        
      </ul>
    </div>
  </div>
</nav>
        <Routes>
            <Route path='/demo' element={<Demo/>}/>
            <Route path='/home' element={<Home/>}/>
            <Route path='/props' element={<Props/>}/>
            <Route path='/life' element={<Life/>}/>
            <Route path='/api' element={<API/>}/>
            {/* <Route path='/button' element={<Button/>}/> */}
            <Route path='/usestate' element={<Usestate/>}/>
            <Route path='/useeffect' element={<UseEffect/>}/>
            <Route path='/useef' element={<UseEf/>}/>
            <Route path='/useReducer' element={<UseREducer/>}/>
            <Route path='/useref' element={<Useref/>}/>
        </Routes>
    </Router>
        </>
    );
}

export default header;
