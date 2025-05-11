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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1f8
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class C_OP_TeleportBeam : public source2sdk::particles::CParticleFunctionOperator
        {
        public:
            // metadata: MPropertyFriendlyName "Position Control Point"
            std::int32_t m_nCPPosition; // 0x1c0            
            // metadata: MPropertyFriendlyName "Velocity Control Point"
            std::int32_t m_nCPVelocity; // 0x1c4            
            // metadata: MPropertyFriendlyName "Misc Control Point"
            std::int32_t m_nCPMisc; // 0x1c8            
            // metadata: MPropertyFriendlyName "Color Control Point"
            std::int32_t m_nCPColor; // 0x1cc            
            // metadata: MPropertyFriendlyName "Invalid Color Control Point"
            std::int32_t m_nCPInvalidColor; // 0x1d0            
            // metadata: MPropertyFriendlyName "Extra Arc Data Point"
            std::int32_t m_nCPExtraArcData; // 0x1d4            
            // metadata: MPropertyFriendlyName "Gravity"
            Vector m_vGravity; // 0x1d8            
            // metadata: MPropertyFriendlyName "Arc Duration Maximum"
            float m_flArcMaxDuration; // 0x1e4            
            // metadata: MPropertyFriendlyName "Segment Break"
            float m_flSegmentBreak; // 0x1e8            
            // metadata: MPropertyFriendlyName "Arc Speed"
            float m_flArcSpeed; // 0x1ec            
            // metadata: MPropertyFriendlyName "Alpha"
            float m_flAlpha; // 0x1f0            
            uint8_t _pad01f4[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_OP_TeleportBeam because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::particles::C_OP_TeleportBeam) == 0x1f8);
    };
};
