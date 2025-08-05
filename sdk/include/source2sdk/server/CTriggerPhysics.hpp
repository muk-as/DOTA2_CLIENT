#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"

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
        // Size: 0xa20
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
        class CTriggerPhysics : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad09c0[0x10]; // 0x9c0
            // metadata: MNetworkEnable
            float m_gravityScale; // 0x9d0            
            // metadata: MNetworkEnable
            float m_linearLimit; // 0x9d4            
            // metadata: MNetworkEnable
            float m_linearDamping; // 0x9d8            
            // metadata: MNetworkEnable
            float m_angularLimit; // 0x9dc            
            // metadata: MNetworkEnable
            float m_angularDamping; // 0x9e0            
            // metadata: MNetworkEnable
            float m_linearForce; // 0x9e4            
            // metadata: MNetworkEnable
            float m_flFrequency; // 0x9e8            
            // metadata: MNetworkEnable
            float m_flDampingRatio; // 0x9ec            
            // metadata: MNetworkEnable
            Vector m_vecLinearForcePointAt; // 0x9f0            
            // metadata: MNetworkEnable
            bool m_bCollapseToForcePoint; // 0x9fc            
            uint8_t _pad09fd[0x3]; // 0x9fd
            // metadata: MNetworkEnable
            Vector m_vecLinearForcePointAtWorld; // 0xa00            
            // metadata: MNetworkEnable
            Vector m_vecLinearForceDirection; // 0xa0c            
            // metadata: MNetworkEnable
            bool m_bConvertToDebrisWhenPossible; // 0xa18            
            uint8_t _pad0a19[0x7];
            
            // Datamap fields:
            // void m_pController; // 0x9c8
            // CUtlSymbolLarge InputSetLinearForcePointAt; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerPhysics) == 0xa20);
    };
};
