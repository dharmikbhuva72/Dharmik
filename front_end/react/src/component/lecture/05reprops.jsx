import React, { Component } from 'react'

export default class reprops extends Component {
  render() {
    return (
      <>
      <div className="card col-3" style={{width: "17rem"}}>
            <img className="card-img-top" src={this.props.img} alt="Card image cap" height={"250px"}/>
            <div className="card-body">
                <h5 className="card-title">{this.props.title}</h5>
                <p className="card-text">Old Price:<del>${this.props.oldprice}</del></p>
                <p className="card-text">New Price:${this.props.newprice}</p>
                <h5 href="#" className="btn btn-primary">ADD TO CART</h5>
            </div>
        </div>
      </>
    )
  }
}
