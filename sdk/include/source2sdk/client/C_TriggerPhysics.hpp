#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseTrigger.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
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
        class C_TriggerPhysics : public source2sdk::client::C_BaseTrigger
        {
        public:
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
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_TriggerPhysics because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_TriggerPhysics) == 0x_);
    };
};
