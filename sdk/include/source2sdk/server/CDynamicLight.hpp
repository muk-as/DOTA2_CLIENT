#pragma once
#include "source2sdk/server/CBaseModelEntity.hpp"
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
    // Size: 0x7c8
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
    class CDynamicLight : public server::CBaseModelEntity
    {
    public:
        uint8_t m_ActualFlags; // 0x7b0        
        // metadata: MNetworkEnable
        uint8_t m_Flags; // 0x7b1        
        // metadata: MNetworkEnable
        uint8_t m_LightStyle; // 0x7b2        
        bool m_On; // 0x7b3        
        // metadata: MNetworkEnable
        float m_Radius; // 0x7b4        
        // metadata: MNetworkEnable
        int32_t m_Exponent; // 0x7b8        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "360,000000"
        float m_InnerAngle; // 0x7bc        
        // metadata: MNetworkEnable
        // metadata: MNetworkBitCount "8"
        // metadata: MNetworkMinValue "0,000000"
        // metadata: MNetworkMaxValue "360,000000"
        float m_OuterAngle; // 0x7c0        
        // metadata: MNetworkEnable
        float m_SpotRadius; // 0x7c4        
        
        // Datamap fields:
        // void CDynamicLightDynamicLightThink; // 0x0
        // void InputTurnOn; // 0x0
        // void InputTurnOff; // 0x0
        // void InputToggle; // 0x0
        // Color _light; // 0x7fffffff
        // float pitch; // 0x7fffffff
        // int32_t spawnflags; // 0x7fffffff
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDynamicLight because it is not a standard-layout class
    static_assert(sizeof(CDynamicLight) == 0x7c8);
};
