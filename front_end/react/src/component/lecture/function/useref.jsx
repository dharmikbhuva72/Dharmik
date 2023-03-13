import React, { useState,useRef } from 'react';

function Useref() {

    const [name, setName] = useState("")
    const [pass, setPass] = useState("")
    const [em , setEm] = useState("")
    const [num, setNum] = useState("")

    const inpt = useRef(null)

    const btnclick = () => {
        inpt.current.focus();

        if(inpt.current.value == "")
        {
            setName("Please Enter Name")
            setPass("Please Enter password")
            setEm("Please Enter Email")
            setNum("Please Enter Mobile number")
        }
        else
        {
            setName("")
            setPass("")
            setEm("")
            setNum("")
        }
    }


    return (
        <div className="container">
            <div className="row mt-5">
                <div className="col">
                    <table border={2}>
                        <thead>
                        <tr>
                            <td>Name</td>
                            <td><input type="text" ref={inpt}/></td>
                            <td><span>{name}</span></td>
                        </tr>
                        <tr>
                            <td>Password</td>
                            <td><input type="password" ref={inpt}  /></td>
                            <td><span>{pass}</span></td>
                        </tr>
                        <tr>
                            <td>Email</td>
                            <td><input type="email" /></td>
                            <td><span>{em}</span></td>
                        </tr>
                        <tr>
                            <td>Mobile</td>
                            <td><input type="text" /></td>
                            <td><span>{num}</span></td>
                        </tr>
                        <tr>
                            <td colSpan={2}>
                                <input type="submit" />
                            </td>
                        </tr>
                        </thead>
                    </table>
                </div>
            </div>
        </div>
    );
}

export default Useref;