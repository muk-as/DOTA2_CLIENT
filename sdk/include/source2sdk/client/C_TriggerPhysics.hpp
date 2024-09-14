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
    // Size: 0x830
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
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
        float m_gravityScale; // 0x7e0        
        // metadata: MNetworkEnable
        float m_linearLimit; // 0x7e4        
        // metadata: MNetworkEnable
        float m_linearDamping; // 0x7e8        
        // metadata: MNetworkEnable
        float m_angularLimit; // 0x7ec        
        // metadata: MNetworkEnable
        float m_angularDamping; // 0x7f0        
        // metadata: MNetworkEnable
        float m_linearForce; // 0x7f4        
        // metadata: MNetworkEnable
        float m_flFrequency; // 0x7f8        
        // metadata: MNetworkEnable
        float m_flDampingRatio; // 0x7fc        
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAt; // 0x800        
        // metadata: MNetworkEnable
        bool m_bCollapseToForcePoint; // 0x80c        
        [[maybe_unused]] std::uint8_t pad_0x80d[0x3]; // 0x80d
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAtWorld; // 0x810        
        // metadata: MNetworkEnable
        Vector m_vecLinearForceDirection; // 0x81c        
        // metadata: MNetworkEnable
        bool m_bConvertToDebrisWhenPossible; // 0x828        
        [[maybe_unused]] std::uint8_t pad_0x829[0x7];
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in C_TriggerPhysics because it is not a standard-layout class
    static_assert(sizeof(C_TriggerPhysics) == 0x830);
};
