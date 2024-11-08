#pragma once
#include "source2sdk/client/C_BaseTrigger.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::client
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x878
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MNetworkVarNames "float m_gravityScale"
    // static metadata: MNetworkVarNames "float m_linearLimit"
    // static metadata: MNetworkVarNames "float m_linearDamping"
    // static metadata: MNetworkVarNames "float m_angularLimit"
    // static metadata: MNetworkVarNames "float m_angularDamping"
    // static metadata: MNetworkVarNames "float m_linearForce"
    // static metadata: MNetworkVarNames "float m_flFrequency"
    // static metadata: MNetworkVarNames "float m_flDampingRatio"
    // static metadata: MNetworkVarNames "Vector m_vecLinearForcePointAt"
    // static metadata: MNetworkVarNames "bool m_bCollapseToForcePoint"
    // static metadata: MNetworkVarNames "Vector m_vecLinearForcePointAtWorld"
    // static metadata: MNetworkVarNames "Vector m_vecLinearForceDirection"
    // static metadata: MNetworkVarNames "bool m_bConvertToDebrisWhenPossible"
    #pragma pack(push, 1)
    class C_TriggerPhysics : public client::C_BaseTrigger
    {
    public:
        // metadata: MNetworkEnable
        float m_gravityScale; // 0x828        
        // metadata: MNetworkEnable
        float m_linearLimit; // 0x82c        
        // metadata: MNetworkEnable
        float m_linearDamping; // 0x830        
        // metadata: MNetworkEnable
        float m_angularLimit; // 0x834        
        // metadata: MNetworkEnable
        float m_angularDamping; // 0x838        
        // metadata: MNetworkEnable
        float m_linearForce; // 0x83c        
        // metadata: MNetworkEnable
        float m_flFrequency; // 0x840        
        // metadata: MNetworkEnable
        float m_flDampingRatio; // 0x844        
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAt; // 0x848        
        // metadata: MNetworkEnable
        bool m_bCollapseToForcePoint; // 0x854        
        [[maybe_unused]] std::uint8_t pad_0x855[0x3]; // 0x855
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAtWorld; // 0x858        
        // metadata: MNetworkEnable
        Vector m_vecLinearForceDirection; // 0x864        
        // metadata: MNetworkEnable
        bool m_bConvertToDebrisWhenPossible; // 0x870        
        [[maybe_unused]] std::uint8_t pad_0x871[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TriggerPhysics because it is not a standard-layout class
    static_assert(sizeof(C_TriggerPhysics) == 0x878);
};
