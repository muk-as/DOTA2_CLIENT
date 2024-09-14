#pragma once
#include "source2sdk/server/CBaseTrigger.hpp"
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
    // Size: 0x9b8
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
    class CTriggerPhysics : public server::CBaseTrigger
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x958[0x10]; // 0x958
        // metadata: MNetworkEnable
        float m_gravityScale; // 0x968        
        // metadata: MNetworkEnable
        float m_linearLimit; // 0x96c        
        // metadata: MNetworkEnable
        float m_linearDamping; // 0x970        
        // metadata: MNetworkEnable
        float m_angularLimit; // 0x974        
        // metadata: MNetworkEnable
        float m_angularDamping; // 0x978        
        // metadata: MNetworkEnable
        float m_linearForce; // 0x97c        
        // metadata: MNetworkEnable
        float m_flFrequency; // 0x980        
        // metadata: MNetworkEnable
        float m_flDampingRatio; // 0x984        
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAt; // 0x988        
        // metadata: MNetworkEnable
        bool m_bCollapseToForcePoint; // 0x994        
        [[maybe_unused]] std::uint8_t pad_0x995[0x3]; // 0x995
        // metadata: MNetworkEnable
        Vector m_vecLinearForcePointAtWorld; // 0x998        
        // metadata: MNetworkEnable
        Vector m_vecLinearForceDirection; // 0x9a4        
        // metadata: MNetworkEnable
        bool m_bConvertToDebrisWhenPossible; // 0x9b0        
        [[maybe_unused]] std::uint8_t pad_0x9b1[0x7];
        
        // Datamap fields:
        // void m_pController; // 0x960
        // CUtlSymbolLarge InputSetLinearForcePointAt; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CTriggerPhysics because it is not a standard-layout class
    static_assert(sizeof(CTriggerPhysics) == 0x9b8);
};
