#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CTriggerMultiple.hpp"

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
        class CTriggerImpact : public source2sdk::server::CTriggerMultiple
        {
        public:
            float m_flMagnitude; // 0x_            
            float m_flNoise; // 0x_            
            float m_flViewkick; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_pOutputForce has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<Vector> m_pOutputForce;
            char m_pOutputForce[0x_]; // 0x_            
            
            // Datamap fields:
            // void InputImpact; // 0x_
            // float InputSetMagnitude; // 0x_
            // void CTriggerImpactDisable; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerImpact because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerImpact) == 0x_);
    };
};
