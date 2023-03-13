import React, { useReducer } from 'react';
    const IntislData = {count:0}

    function Reducer(state,action){
        switch(action.type){
            case "increment":
                return {count:state.count+1}
            case "Decrement":
                return {count:state.count-1}
            case "clear":
                return {count:state.count=0}
            
            default:
                return state;
        }
    }

function UseREducer(props){
    const [state , dispatch] = useReducer(Reducer,IntislData);
    return (
        <div>
            <div className="container">
                <div className="row mt-5">
                    <div className="col">
                        <button className="btn btn-primary m-2" onClick={()=>dispatch({type:'Decrement'})} >Decrement</button>
                        <h2>{state.count}</h2>
                        <button className="btn btn-primary m-2" onClick={()=>dispatch({type:'increment'})}>Increment </button>
                        <button className="btn btn-primary m-2" onClick={()=>dispatch({type:'clear'})}>clear</button>
                    </div>
                </div>
            </div>
        </div>
    );
}

export default UseREducer;