import { useEffect } from "react";
import React{useState,,useEffect} from 'react';

function data(msg,delay)
{
    const[message,setmessage]= UseState("")

    useEffect(()=>{
        setTimeout(()=>{
            setmessage(msg)
        },delay);
    },)

    React.useDebugValue(message,(data) =>{
        
    } )
}

function useDebugValue(props) {
    return (
        <>
            <div className="container">
                <div className="row">
                    <div className="col">

                    </div>
                </div>
            </div>
        </>
    );
}

export default useDebugValue;