import React from 'react';
import { useRef } from 'react';

function UseRef(props) {
    const inpt = useRef(null)

    const BtnClck=()=>{
        console.log("Btn Called");
        inpt.current.focus();
        if(inpt.current.value == "")
        {
            alert("Please Enter data");
        }
    }
    return (
        <div>
            <div className="container">
                <div className="row mt-5">
                    <div className="col-4">
                        <input type="text" className='form-control' ref={inpt}/>
                        <button className='btn btn-primary' onClick={BtnClck}>Click Me</button>
                    </div>
                </div>
            </div>
        </div>
    );
}

export default UseRef;