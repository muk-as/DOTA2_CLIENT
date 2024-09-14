#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    class CBaseFilter;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x958
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkIncludeByName "m_spawnflags"
    // static metadata: MNetworkVarNames "bool m_bDisabled"
    // static metadata: MNetworkVarNames "bool m_bClientSidePredicted"
    #pragma pack(push, 1)
    class CBaseTrigger : public server::CBaseToggle
    {
    public:
        // metadata: MNetworkEnable
        bool m_bDisabled; // 0x808        
        [[maybe_unused]] std::uint8_t pad_0x809[0x7]; // 0x809
        CUtlSymbolLarge m_iFilterName; // 0x810        
        // m_hFilter has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseFilter> m_hFilter;
        char m_hFilter[0x4]; // 0x818        
        [[maybe_unused]] std::uint8_t pad_0x81c[0x4]; // 0x81c
        entity2::CEntityIOOutput m_OnStartTouch; // 0x820        
        entity2::CEntityIOOutput m_OnStartTouchAll; // 0x848        
        entity2::CEntityIOOutput m_OnEndTouch; // 0x870        
        entity2::CEntityIOOutput m_OnEndTouchAll; // 0x898        
        entity2::CEntityIOOutput m_OnTouching; // 0x8c0        
        entity2::CEntityIOOutput m_OnTouchingEachEntity; // 0x8e8        
        entity2::CEntityIOOutput m_OnNotTouching; // 0x910        
        // m_hTouchingEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<CHandle<server::CBaseEntity>> m_hTouchingEntities;
        char m_hTouchingEntities[0x18]; // 0x938        
        // metadata: MNetworkEnable
        bool m_bClientSidePredicted; // 0x950        
        [[maybe_unused]] std::uint8_t pad_0x951[0x7];
        
        // Datamap fields:
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
        // void InputToggle; // 0x0
        // void InputTouchTest; // 0x0
        // void InputStartTouch; // 0x0
        // void InputEndTouch; // 0x0
        // bool okifnomodel; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CBaseTrigger because it is not a standard-layout class
    static_assert(sizeof(CBaseTrigger) == 0x958);
};
