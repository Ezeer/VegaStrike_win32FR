#ifndef __GAMEMENU_H__
#define __GAMEMENU_H__

#include "gui/windowcontroller.h"
#include "gui/simplepicker.h"

//made extern by ezee
extern void gamemenu_keyboard_handler( unsigned int ch, unsigned int mod, bool release, int x, int y );

class GameMenu : public WctlBase< GameMenu >
{
    friend class WctlBase< GameMenu >;
public:
    virtual void init( void );
    virtual void run( void );
    //lets do some art now with the good foundation of ace and Hellcat.
    //we need to refresh the draw function
    //Process a command event from the window. Ezee
    //virtual bool processWindowCommand( const EventCommandId &command, Control *control );

    

    GameMenu( bool firsttime );
    virtual ~GameMenu( void );

protected:
    bool m_firstTime;

    virtual bool processSinglePlayerButton( const EventCommandId &command, Control *control );
    virtual bool processMultiPlayerHostButton( const EventCommandId &command, Control *control );
    virtual bool processMultiPlayerAcctButton( const EventCommandId &command, Control *control );
    virtual bool processMultiPlayerButton( const EventCommandId &command, Control *control );
    virtual bool processExitGameButton( const EventCommandId &command, Control *control );
    virtual bool processJoinGameButton( const EventCommandId &command, Control *control );
    virtual bool processMainMenuButton( const EventCommandId &command, Control *control );
    //processLoadGameButton added by ezee
    virtual bool processLoadGameButton( const EventCommandId &command, Control *control );
    virtual bool processLoadGameMenuButton( const EventCommandId &command, Control *control );
    virtual bool processNewGameButton ( const EventCommandId &command, Control *control ); 
    virtual void createControls();

public:
//Helper functions for use in a submenu of BaseComputer.

//Caller is responsible for making a return button, as well as adding the "JoinGame" WctlTableEntry
    static void createNetworkControls( GroupControl *serverConnGroup, std::vector< unsigned int > *keyboard_input_queue );
    static void readJoinGameControls( Window *window, string &user, string &pass );

//Ezee sub menu following ace rules eh eh
//when you got it that rocks !
//" time time time is on my side ... yes it is ! " r.stones
//anyway
//for load game panel
 //static void createLoadGameControls( GroupControl *LoadGamePage, std::vector< unsigned int > *keyboard_input_queue );
 //static void readJoinGameControls( Window *window, string &user, string &pass );



};

class NetActionConfirm : public WindowController
{
public:
    enum ActionMode {SAVEACCT, JOINGAME, DIE};
private:
    int        player;
    Window    *m_parent;
    string     type;
    string     text;
    string     savefile;
    ActionMode netAction;
public:
//CONSTRUCTION.
    NetActionConfirm( int pnum, Window *w, ActionMode action ) :
        player( pnum )
        , m_parent( w )
        , netAction( action ) {}
    virtual ~NetActionConfirm( void ) {}

//Set up the window and get everything ready.
    virtual void init( void );

//Process a command event from the window.
    virtual bool processWindowCommand( const EventCommandId &command, Control *control );

    virtual bool finalizeJoinGame( int launchShip = 0 );
    virtual bool confirmedJoinGame();

    virtual bool confirmedNetDie();
    virtual bool confirmedNetSaveGame();
};

#endif

