import React from 'react';

    const Themes = {
        light:{
            forground:"aqua",
            background:"grey"
        },
        dark:{
            forground:"",
            background:"yellow"
        }
    }

    const Themescontext = React.createContext(Themes.dark)


function usecontext(props) {
    return (
        <>

        </>
    );
}

export default usecontext;