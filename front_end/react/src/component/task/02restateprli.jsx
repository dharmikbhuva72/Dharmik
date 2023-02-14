import React, { Component } from 'react'

export default class restateprli extends Component {
  render() {
    return (
      <>
      <div className="card col-3" style={{width: "17rem"}}>
        <img src={this.props.img} className="card-img-top" alt="..." height={"250px"}/>
        <div className="card-body">
            <h4 className="card-title">Formate: {this.props.formate}</h4>
            <h5 className="card-title">Name: {this.props.name}</h5>
            <h6>Centuries: {this.props.sen}</h6>
            <h6>Fifties: {this.props.fif}</h6>
            <button href="#" className="btn btn-primary" onClick={this.props.clk}>change the formate</button>
        </div>
    </div>
      </>
    )
  }
}
