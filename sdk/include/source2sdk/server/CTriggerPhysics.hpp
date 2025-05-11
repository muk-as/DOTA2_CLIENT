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
        // Size: 0x9c8
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
            uint8_t _pad0968[0x10]; // 0x968
            // metadata: MNetworkEnable
            float m_gravityScale; // 0x978            
            // metadata: MNetworkEnable
            float m_linearLimit; // 0x97c            
            // metadata: MNetworkEnable
            float m_linearDamping; // 0x980            
            // metadata: MNetworkEnable
            float m_angularLimit; // 0x984            
            // metadata: MNetworkEnable
            float m_angularDamping; // 0x988            
            // metadata: MNetworkEnable
            float m_linearForce; // 0x98c            
            // metadata: MNetworkEnable
            float m_flFrequency; // 0x990            
            // metadata: MNetworkEnable
            float m_flDampingRatio; // 0x994            
            // metadata: MNetworkEnable
            Vector m_vecLinearForcePointAt; // 0x998            
            // metadata: MNetworkEnable
            bool m_bCollapseToForcePoint; // 0x9a4            
            uint8_t _pad09a5[0x3]; // 0x9a5
            // metadata: MNetworkEnable
            Vector m_vecLinearForcePointAtWorld; // 0x9a8            
            // metadata: MNetworkEnable
            Vector m_vecLinearForceDirection; // 0x9b4            
            // metadata: MNetworkEnable
            bool m_bConvertToDebrisWhenPossible; // 0x9c0            
            uint8_t _pad09c1[0x7];
            
            // Datamap fields:
            // void m_pController; // 0x970
            // CUtlSymbolLarge InputSetLinearForcePointAt; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerPhysics) == 0x9c8);
    };
};
