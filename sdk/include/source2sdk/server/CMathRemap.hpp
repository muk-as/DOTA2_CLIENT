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
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMathRemap : public source2sdk::server::CLogicalEntity
        {
        public:
            float m_flInMin; // 0x_            
            float m_flInMax; // 0x_            
            float m_flOut1; // 0x_            
            float m_flOut2; // 0x_            
            float m_flOldInValue; // 0x_            
            bool m_bEnabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_OutValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OutValue;
            char m_OutValue[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnRoseAboveMin; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnRoseAboveMax; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnFellBelowMin; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnFellBelowMax; // 0x_            
            
            // Datamap fields:
            // float InputValue; // 0x_
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMathRemap because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMathRemap) == 0x_);
    };
};
