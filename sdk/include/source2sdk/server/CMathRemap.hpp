#pragma once
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
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
    // Size: 0x598
    // Has VTable
    // Construct allowed
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CMathRemap : public server::CLogicalEntity
    {
    public:
        float m_flInMin; // 0x4b8        
        float m_flInMax; // 0x4bc        
        float m_flOut1; // 0x4c0        
        float m_flOut2; // 0x4c4        
        float m_flOldInValue; // 0x4c8        
        bool m_bEnabled; // 0x4cc        
        [[maybe_unused]] std::uint8_t pad_0x4cd[0x3]; // 0x4cd
        // m_OutValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CEntityOutputTemplate<float> m_OutValue;
        char m_OutValue[0x28]; // 0x4d0        
        entity2::CEntityIOOutput m_OnRoseAboveMin; // 0x4f8        
        entity2::CEntityIOOutput m_OnRoseAboveMax; // 0x520        
        entity2::CEntityIOOutput m_OnFellBelowMin; // 0x548        
        entity2::CEntityIOOutput m_OnFellBelowMax; // 0x570        
        
        // Datamap fields:
        // float InputValue; // 0x0
        // void InputEnable; // 0x0
        // void InputDisable; // 0x0
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CMathRemap because it is not a standard-layout class
    static_assert(sizeof(CMathRemap) == 0x598);
};
