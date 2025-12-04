#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseModelEntity.hpp"

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
        // static metadata: MNetworkVarNames "uint8 m_Flags"
        // static metadata: MNetworkVarNames "uint8 m_LightStyle"
        // static metadata: MNetworkVarNames "float32 m_Radius"
        // static metadata: MNetworkVarNames "int32 m_Exponent"
        // static metadata: MNetworkVarNames "float32 m_InnerAngle"
        // static metadata: MNetworkVarNames "float32 m_OuterAngle"
        // static metadata: MNetworkVarNames "float32 m_SpotRadius"
        #pragma pack(push, 1)
        class CDynamicLight : public source2sdk::server::CBaseModelEntity
        {
        public:
            std::uint8_t m_ActualFlags; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_Flags; // 0x_            
            // metadata: MNetworkEnable
            std::uint8_t m_LightStyle; // 0x_            
            bool m_On; // 0x_            
            // metadata: MNetworkEnable
            float m_Radius; // 0x_            
            // metadata: MNetworkEnable
            std::int32_t m_Exponent; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "360,000000"
            float m_InnerAngle; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkBitCount "8"
            // metadata: MNetworkMinValue "0,000000"
            // metadata: MNetworkMaxValue "360,000000"
            float m_OuterAngle; // 0x_            
            // metadata: MNetworkEnable
            float m_SpotRadius; // 0x_            
            
            // Datamap fields:
            // void CDynamicLightDynamicLightThink; // 0x_
            // void InputTurnOn; // 0x_
            // void InputTurnOff; // 0x_
            // void InputToggle; // 0x_
            // Color _light; // 0x_
            // float pitch; // 0x_
            // int32_t spawnflags; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDynamicLight because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDynamicLight) == 0x_);
    };
};
