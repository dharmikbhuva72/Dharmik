import React, { Component } from 'react'

export default class recompo extends Component {
  render() {
    return (
      <div>
         <div className="card col-3" style={{width: "100%"}}>
                <img className="card-img-top" src={this.props.img} alt="Card image cap" height={"250px"} />
                <div className="card-body">
                    <h5 className="card-title">{this.props.title}</h5>
                    <p className="card-text">Old Price:<del>${this.props.oldprice}</del></p>
                    <p className="card-text">New Price:${this.props.newprice} </p>
                    <h5 className="btn btn-primary">ADD TO CART</h5>
                </div>
            </div>
      </div>
    )
  }
}
