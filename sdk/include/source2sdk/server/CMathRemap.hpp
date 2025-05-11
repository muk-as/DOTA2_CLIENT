#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"

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
        // Size: 0x5b8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMathRemap : public source2sdk::server::CLogicalEntity
        {
        public:
            float m_flInMin; // 0x4d8            
            float m_flInMax; // 0x4dc            
            float m_flOut1; // 0x4e0            
            float m_flOut2; // 0x4e4            
            float m_flOldInValue; // 0x4e8            
            bool m_bEnabled; // 0x4ec            
            uint8_t _pad04ed[0x3]; // 0x4ed
            // m_OutValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OutValue;
            char m_OutValue[0x28]; // 0x4f0            
            source2sdk::entity2::CEntityIOOutput m_OnRoseAboveMin; // 0x518            
            source2sdk::entity2::CEntityIOOutput m_OnRoseAboveMax; // 0x540            
            source2sdk::entity2::CEntityIOOutput m_OnFellBelowMin; // 0x568            
            source2sdk::entity2::CEntityIOOutput m_OnFellBelowMax; // 0x590            
            
            // Datamap fields:
            // float InputValue; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMathRemap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMathRemap) == 0x5b8);
    };
};
