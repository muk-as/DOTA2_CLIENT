#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CBaseFilter;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x998
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "bool m_bDisabled"
        #pragma pack(push, 1)
        class CBaseTrigger : public source2sdk::server::CBaseToggle
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnStartTouch; // 0x848            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouchAll; // 0x870            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouch; // 0x898            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouchAll; // 0x8c0            
            source2sdk::entity2::CEntityIOOutput m_OnTouching; // 0x8e8            
            source2sdk::entity2::CEntityIOOutput m_OnTouchingEachEntity; // 0x910            
            source2sdk::entity2::CEntityIOOutput m_OnNotTouching; // 0x938            
            // m_hTouchingEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTouchingEntities;
            char m_hTouchingEntities[0x18]; // 0x960            
            CUtlSymbolLarge m_iFilterName; // 0x978            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hFilter;
            char m_hFilter[0x4]; // 0x980            
            // metadata: MNetworkEnable
            bool m_bDisabled; // 0x984            
            uint8_t _pad0985[0xb]; // 0x985
            bool m_bUseAsyncQueries; // 0x990            
            uint8_t _pad0991[0x7];
            
            // Datamap fields:
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // void InputToggle; // 0x0
            // void InputTouchTest; // 0x0
            // void InputStartTouch; // 0x0
            // void InputEndTouch; // 0x0
            // bool okifnomodel; // 0x7fffffff
            // float radius; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseTrigger) == 0x998);
    };
};
