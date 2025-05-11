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
        // Size: 0x5d8
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CMathCounter : public source2sdk::server::CLogicalEntity
        {
        public:
            float m_flMin; // 0x4d8            
            float m_flMax; // 0x4dc            
            bool m_bHitMin; // 0x4e0            
            bool m_bHitMax; // 0x4e1            
            bool m_bDisabled; // 0x4e2            
            uint8_t _pad04e3[0x5]; // 0x4e3
            // m_OutValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OutValue;
            char m_OutValue[0x28]; // 0x4e8            
            // m_OnGetValue has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_OnGetValue;
            char m_OnGetValue[0x28]; // 0x510            
            source2sdk::entity2::CEntityIOOutput m_OnHitMin; // 0x538            
            source2sdk::entity2::CEntityIOOutput m_OnHitMax; // 0x560            
            source2sdk::entity2::CEntityIOOutput m_OnChangedFromMin; // 0x588            
            source2sdk::entity2::CEntityIOOutput m_OnChangedFromMax; // 0x5b0            
            
            // Datamap fields:
            // float InputAdd; // 0x0
            // float InputDivide; // 0x0
            // float InputMultiply; // 0x0
            // float InputSetValue; // 0x0
            // float InputSetValueNoFire; // 0x0
            // float InputSubtract; // 0x0
            // float InputSetHitMax; // 0x0
            // float InputSetHitMin; // 0x0
            // void InputGetValue; // 0x0
            // void InputEnable; // 0x0
            // void InputDisable; // 0x0
            // int32_t startvalue; // 0x7fffffff
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CMathCounter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CMathCounter) == 0x5d8);
    };
};
