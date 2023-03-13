import { Button } from 'bootstrap5';
import React, { Component } from 'react';

class buttonClick extends Component {
    render() {
        return (
            <>
            <div className="container">
                <div className="row">
                    <div className="col"></div>
                        <button className='btn btn-primary' onClick={()=>{console.log("btn called");
                    console.log(this.props);}}>click me</button>
                </div>
            </div>
            </>
        );
    }
}

export default buttonClick;