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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MNetworkIncludeByName "m_spawnflags"
        // static metadata: MNetworkVarNames "bool m_bDisabled"
        #pragma pack(push, 1)
        class CBaseTrigger : public source2sdk::server::CBaseToggle
        {
        public:
            source2sdk::entity2::CEntityIOOutput m_OnStartTouch; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnStartTouchAll; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouch; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnEndTouchAll; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnTouching; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnTouchingEachEntity; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnNotTouching; // 0x_            
            // m_hTouchingEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_hTouchingEntities;
            char m_hTouchingEntities[0x_]; // 0x_            
            CUtlSymbolLarge m_iFilterName; // 0x_            
            // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseFilter> m_hFilter;
            char m_hFilter[0x_]; // 0x_            
            // metadata: MNetworkEnable
            bool m_bDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            bool m_bUseAsyncQueries; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // void InputToggle; // 0x_
            // void InputTouchTest; // 0x_
            // void InputStartTouch; // 0x_
            // void InputEndTouch; // 0x_
            // bool okifnomodel; // 0x_
            // float radius; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseTrigger because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseTrigger) == 0x_);
    };
};
