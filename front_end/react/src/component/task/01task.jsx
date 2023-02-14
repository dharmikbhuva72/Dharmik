import React from 'react';
import {
    BrowserRouter as Router,
    Routes,
    Route,
    Link,
  } from "react-router-dom";
import Breakfast from "./01breakfast"
import Lunch from './01lunch';
import Dinner from './01dinner';  
import Gallery from "./gallery"
import State from "./02stateproplife"
function task(props) {
    const menu = {"/breakfast":'Breakfast','/lunch':'Lunch','dinner':'Dinner','/gallery':'Gallery',"state":"State"};

    const data = Object.entries(menu).map((res,i)=>{
        return <li className="nav-item" key={i}>
        <Link className="nav-link active" to={res[0]}>{res[1]}</Link>
        </li>
    })

    return (
        <div>
          <Router>
            <nav className="navbar navbar-expand-lg navbar-light bg-light">
            <div className="container-fluid">
                <a className="navbar-brand" href="#"><img src="https://img.freepik.com/premium-vector/restaurant-logo-design-template_79169-56.jpg?w=2000" height="100px" width="100px" alt="" /></a>
                <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#navbarNav" aria-controls="navbarNav" aria-expanded="false" aria-label="Toggle navigation">
                <span className="navbar-toggler-icon"></span>
                </button>
                <div className="collapse navbar-collapse" id="navbarNav">
                <ul className="navbar-nav">

                    {data}

                </ul>
                </div>
            </div>
            </nav>

            <>
            
            </>
            <Routes>
                <Route path='breakfast' element={<Breakfast/>} />
                <Route path='lunch' element={<Lunch/>} />
                <Route path='dinner' element={<Dinner/>} />
                <Route path='gallery' element={<Gallery/>} />
                <Route path='state' element={<State/>} />
            </Routes>
            </Router>
        </div>
    );
}

export default task;