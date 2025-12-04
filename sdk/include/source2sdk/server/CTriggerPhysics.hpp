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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
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
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            float m_gravityScale; // 0x_            
            // metadata: MNetworkEnable
            float m_linearLimit; // 0x_            
            // metadata: MNetworkEnable
            float m_linearDamping; // 0x_            
            // metadata: MNetworkEnable
            float m_angularLimit; // 0x_            
            // metadata: MNetworkEnable
            float m_angularDamping; // 0x_            
            // metadata: MNetworkEnable
            float m_linearForce; // 0x_            
            // metadata: MNetworkEnable
            float m_flFrequency; // 0x_            
            // metadata: MNetworkEnable
            float m_flDampingRatio; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vecLinearForcePointAt; // 0x_            
            // metadata: MNetworkEnable
            bool m_bCollapseToForcePoint; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            Vector m_vecLinearForcePointAtWorld; // 0x_            
            // metadata: MNetworkEnable
            Vector m_vecLinearForceDirection; // 0x_            
            // metadata: MNetworkEnable
            bool m_bConvertToDebrisWhenPossible; // 0x_            
            uint8_t _pad_[0x_];
            
            // Datamap fields:
            // void m_pController; // 0x_
            // CUtlSymbolLarge InputSetLinearForcePointAt; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerPhysics) == 0x_);
    };
};
