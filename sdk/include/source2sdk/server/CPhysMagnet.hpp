#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CBaseAnimatingActivity.hpp"
#include "source2sdk/server/magnetted_objects_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x828
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CPhysMagnet : public server::CBaseAnimatingActivity
    {
    public:
        entity2::CEntityIOOutput m_OnMagnetAttach; // 0x798        
        entity2::CEntityIOOutput m_OnMagnetDetach; // 0x7c0        
        float m_massScale; // 0x7e8        
        float m_forceLimit; // 0x7ec        
        float m_torqueLimit; // 0x7f0        
        [[maybe_unused]] std::uint8_t pad_0x7f4[0x4]; // 0x7f4
        // m_MagnettedEntities has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CUtlVector<server::magnetted_objects_t> m_MagnettedEntities;
        char m_MagnettedEntities[0x18]; // 0x7f8        
        bool m_bActive; // 0x810        
        bool m_bHasHitSomething; // 0x811        
        [[maybe_unused]] std::uint8_t pad_0x812[0x2]; // 0x812
        float m_flTotalMass; // 0x814        
        float m_flRadius; // 0x818        
        entity2::GameTime_t m_flNextSuckTime; // 0x81c        
        int32_t m_iMaxObjectsAttached; // 0x820        
        [[maybe_unused]] std::uint8_t pad_0x824[0x4];
        
        // Datamap fields:
        // void InputToggle; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CPhysMagnet because it is not a standard-layout class
    static_assert(sizeof(CPhysMagnet) == 0x828);
};
