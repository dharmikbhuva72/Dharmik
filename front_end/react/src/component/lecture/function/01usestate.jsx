import React from 'react';
import {useState} from 'react';
function Usestate(props) {

    const[vara,setvara]=useState(0)
    const[varb,setvarb]=useState(10)

    function btnclck()
    {
        setvara(10);
        setvarb(20);
    }
    return (
        <>
        <div className="container">
            <div className="row">
                <div className="col">
                    <h2>{vara+varb}</h2>
                    <button className='btn btn-primary' onClick={btnclck}>click me</button>
                </div>
            </div>
        </div>
        </>
    );
}

export default Usestate;