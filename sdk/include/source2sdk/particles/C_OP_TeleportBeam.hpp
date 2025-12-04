#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/particles/CParticleFunctionOperator.hpp"

// /////////////////////////////////////////////////////////////
// Module: particles
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace particles
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_TeleportBeam : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "Position Control Point"
            std::int32_t m_nCPPosition; // 0x_            
            // metadata: MPropertyFriendlyName "Velocity Control Point"
            std::int32_t m_nCPVelocity; // 0x_            
            // metadata: MPropertyFriendlyName "Misc Control Point"
            std::int32_t m_nCPMisc; // 0x_            
            // metadata: MPropertyFriendlyName "Color Control Point"
            std::int32_t m_nCPColor; // 0x_            
            // metadata: MPropertyFriendlyName "Invalid Color Control Point"
            std::int32_t m_nCPInvalidColor; // 0x_            
            // metadata: MPropertyFriendlyName "Extra Arc Data Point"
            std::int32_t m_nCPExtraArcData; // 0x_            
            // metadata: MPropertyFriendlyName "Gravity"
            Vector m_vGravity; // 0x_            
            // metadata: MPropertyFriendlyName "Arc Duration Maximum"
            float m_flArcMaxDuration; // 0x_            
            // metadata: MPropertyFriendlyName "Segment Break"
            float m_flSegmentBreak; // 0x_            
            // metadata: MPropertyFriendlyName "Arc Speed"
            float m_flArcSpeed; // 0x_            
            // metadata: MPropertyFriendlyName "Alpha"
            float m_flAlpha; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_TeleportBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_TeleportBeam) == 0x_);
    };
};
