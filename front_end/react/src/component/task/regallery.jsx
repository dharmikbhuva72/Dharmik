import React, { Component } from 'react'

export default class regallery extends Component {

    

  render() {
    return (
      <>
      <div className="card col-3" style={{width: "17rem"}}>
            <img className="card-img-top" src={this.props.img} alt="Card image cap" height={"250px"}/>
            <div className="card-body">
                <h5 className="card-title">{this.props.title}</h5>
                <p className="card-text">Old Price:<del>${this.props.oldprice}</del></p>
                <p className="card-text">New Price:${this.props.newprice}</p>
                <button className="btn btn-primary" onClick={this.props.clk} >Image change</button>
            </div>
        </div>
      </>
    )
  }
}
