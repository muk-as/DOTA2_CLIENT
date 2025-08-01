/// <reference path="../dota.d.ts" />

namespace Async
{
       
                                                                    
       
    export function Delay ( fDelay: number ): Promise<void>
    {
        return new Promise<void>( resolve => $.Schedule( fDelay, () => resolve() ) );
    }

       
                                                                   
       
    export function NextFrame (): Promise<void>
    {
        return Delay( 0.0 );
    }

       
                                                                                                      
                                                              
       
    export function UnhandledEvent<E extends keyof DotaEventHandlers> ( sEvent: E ): Promise<EventParams<DotaEventHandlers[ E ]>>;
       
                                                                                                      
                                                                                                                        
                                                              
       
    export function UnhandledEvent<E extends keyof DotaEventHandlers> ( sEvent: E, ...match: EventParams<DotaEventHandlers[ E ]> ): Promise<EventParams<DotaEventHandlers[ E ]>>;
       
                                                                                                      
                                                                                                          
                                                              
       
    export function UnhandledEvent<E extends keyof DotaEventHandlers> ( sEvent: E, predicate: ( ...args: EventParams<DotaEventHandlers[ E ]> ) => boolean ): Promise<EventParams<DotaEventHandlers[ E ]>>;

    export function UnhandledEvent<E extends keyof DotaEventHandlers> ( sEvent: E, ...opts: any[] ): Promise<EventParams<DotaEventHandlers[ E ]>>
    {
        let predicate: null | ( ( ...args: EventParams<DotaEventHandlers[ E ]> ) => boolean ) = null;
        if ( typeof opts[ 0 ] === "function" )
            predicate = opts[ 0 ];
        else if ( opts.length > 0 )
        {
            predicate = function ( ...args: EventParams<DotaEventHandlers[ E ]> ): boolean
            {
                for ( let i = 0; i < opts.length; i++ )
                {
                    const opt = opts[ i ];
                    const arg = args[ i ];
                    if ( opt !== arg )
                        return false;
                }
                return true;
            };
        }

        return new Promise( resolve =>
        {
            const nHandlerId = $.RegisterForUnhandledEvent( sEvent, function ( ...args: EventParams<DotaEventHandlers[ E ]> )
            {
                if ( predicate == null || predicate( ...args ) )
                {
                    $.UnregisterForUnhandledEvent( sEvent, nHandlerId );
                    resolve( args );
                }
            } as EventCallback<DotaEventHandlers[ E ]> );
        } );
    }

       
                                                                  
       
    export interface AbortSignal_t
    {
        get aborted (): boolean;
    }

       
                                                                                              
       
    export class AbortController
    {
        signal: AbortSignal_t;
        private _aborted = false;
        constructor()
        {
            const controller = this;
            this.signal = { get aborted () { return controller._aborted; } };
        }
        abort (): void 
        {
            this._aborted = true;
        }
    }

    export function Condition ( predicate: () => boolean, abortSignal?: AbortSignal_t ): Promise<void>
    {
        return new Promise<void>( async resolve =>
        {
            while ( abortSignal === undefined || !abortSignal.aborted )
            {
                if ( predicate() )
                {
                    resolve();
                    return;
                }
                await NextFrame();
            }
        } );
    }

    export type SequenceFn_t = ( abortSignal: Async.AbortSignal_t ) => Generator<unknown, void, unknown> | AsyncGenerator<unknown, void, unknown>;

       
                                                                                                                                 
                                                                                                     
       
    export function RunSequence ( sequenceFn: SequenceFn_t, abortSignal?: Async.AbortSignal_t ): Promise<boolean>
    {
        return new Promise<boolean>( async resolve =>
        {
            const generator = sequenceFn( abortSignal || new Async.AbortController().signal );
            let value: unknown;
            while ( true )
            {
                const iterResult = await generator.next( value! );
                if ( iterResult.done )
                {
                    resolve( true );
                    return;
                }

                value = await iterResult.value;
                if ( abortSignal && abortSignal.aborted )
                {
                    resolve( false );
                    return;
                }
            }
        } );
    }

       
                                                                
               
                                         
                                  
                                 
                                  
                                  
                                  
                                  
       
    export class TimeStamp
    {
        frameTime = $.FrameTime();

           
                                                                                              
           
        Schedule ( fDelay: number, fn: () => void )
        {
            const fDelayFromNow = fDelay - ( $.FrameTime() - this.frameTime );
            $.Schedule( fDelayFromNow, fn );
        }

           
                                                                        
           
        Delay ( fDelay: number ): Promise<void>;
           
                                                                                     
           
        Delay<T> ( fDelay: number, value: T ): Promise<T>;
        Delay<T> ( fDelay: number, value?: T ): Promise<T>
        {
            return new Promise<T>( resolve => this.Schedule( fDelay, () => resolve( value! ) ) );
        }
    }
}
