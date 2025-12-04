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
        class CMathCounter : public source2sdk::server::CLogicalEntity
        {
        public:
            float m_flMin; // 0x_            
            float m_flMax; // 0x_            
            bool m_bHitMin; // 0x_            
            bool m_bHitMax; // 0x_            
            bool m_bDisabled; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_OutValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OutValue;
            char m_OutValue[0x_]; // 0x_            
            // m_OnGetValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnGetValue;
            char m_OnGetValue[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnHitMin; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnHitMax; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnChangedFromMin; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnChangedFromMax; // 0x_            
            
            // Datamap fields:
            // float InputAdd; // 0x_
            // float InputDivide; // 0x_
            // float InputMultiply; // 0x_
            // float InputSetValue; // 0x_
            // float InputSetValueNoFire; // 0x_
            // float InputSubtract; // 0x_
            // float InputSetHitMax; // 0x_
            // float InputSetHitMin; // 0x_
            // void InputGetValue; // 0x_
            // void InputEnable; // 0x_
            // void InputDisable; // 0x_
            // int32_t startvalue; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMathCounter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMathCounter) == 0x_);
    };
};
