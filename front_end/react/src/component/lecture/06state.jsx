import React, { Component } from 'react'

export default class state extends Component {

    constructor()
    {
        super();
        this.state={name:"dharmik bhuva",age:0}
        this.state={movie:"three idiots"}
    }
    btnclck=()=>{
        console.log("btn click");
        this.setState({name:"DHARMIK BHUVA",age:21})
        
    }


  render() {
    return (
      <>
      <div className="container">
        <div className="row mt-5">
            <div className="col">
                <h1>{this.state.name}</h1>
                <h1>{this.state.age}</h1>
                <h1>{this.state.movie}</h1>
                {/* <button className="btn btn-primary" onClick={this.btnclck}>Click ME</button> */}
                <button className="btn btn-success" onClick={()=>{this.setState({movie:"Two state"})}}>click</button>
            </div>
        </div>
      </div>
      </>
    )
  }
}
