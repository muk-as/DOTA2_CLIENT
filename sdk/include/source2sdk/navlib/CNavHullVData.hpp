#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: navlib
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace navlib
    {
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x34
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MVDataRoot
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CNavHullVData
        {
        public:
            // metadata: MPropertyFriendlyName "Enabled"
            // metadata: MPropertyDescription "Is this agent enabled for generation? ( will result in 0 nav areas for this agent if not )."
            bool m_bAgentEnabled; // 0x0            
            uint8_t _pad0001[0x3]; // 0x1
            // metadata: MPropertyFriendlyName "Radius"
            // metadata: MPropertyDescription "Radius of navigating agent capsule."
            float m_agentRadius; // 0x4            
            // metadata: MPropertyFriendlyName "Height"
            // metadata: MPropertyDescription "Height of navigating agent capsule."
            float m_agentHeight; // 0x8            
            // metadata: MPropertyFriendlyName "Enable Short Height"
            // metadata: MPropertyDescription "Enable shorter navigating agent capsules ( e.g. crouch ) in addition to regular height capsules."
            bool m_agentShortHeightEnabled; // 0xc            
            uint8_t _pad000d[0x3]; // 0xd
            // metadata: MPropertyFriendlyName "Short height"
            // metadata: MPropertyDescription "Short Height of navigating agent capsules if enabled."
            float m_agentShortHeight; // 0x10            
            // metadata: MPropertyFriendlyName "Max Climb"
            // metadata: MPropertyDescription "Max vertical offset that the agent simply ignores and walks over."
            float m_agentMaxClimb; // 0x14            
            // metadata: MPropertyFriendlyName "Max Slope"
            // metadata: MPropertyDescription "Max ground slope to be considered walkable."
            std::int32_t m_agentMaxSlope; // 0x18            
            // metadata: MPropertyFriendlyName "Max Jump Down Distance"
            // metadata: MPropertyDescription "Max vertical offset at which to create a jump connection ( possibly one-way )."
            float m_agentMaxJumpDownDist; // 0x1c            
            // metadata: MPropertyFriendlyName "Max Horizontal Jump Distance"
            // metadata: MPropertyDescription "Max horizontal offset over which to create a jump connection ( actually a parameter into the true threshold function )."
            float m_agentMaxJumpHorizDistBase; // 0x20            
            // metadata: MPropertyFriendlyName "Max Jump Up Distance"
            // metadata: MPropertyDescription "Max vertical offset at which to make a jump connection two-way."
            float m_agentMaxJumpUpDist; // 0x24            
            // metadata: MPropertyFriendlyName "Border Erosion"
            // metadata: MPropertyDescription "Border erosion in voxel units ( -1 to use default value based on agent radius )."
            std::int32_t m_agentBorderErosion; // 0x28            
            // metadata: MPropertyFriendlyName "Hierarchical Nav"
            // metadata: MPropertyDescription "Enables super node nav information to be generated"
            bool m_flowMapGenerationEnabled; // 0x2c            
            uint8_t _pad002d[0x3]; // 0x2d
            // metadata: MPropertyFriendlyName "Hierarchical Nav Max Super Node radius"
            // metadata: MPropertyDescription "Maximum radius of a super node - larger means lower resolution"
            float m_flowMapNodeMaxRadius; // 0x30            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::navlib::CNavHullVData, m_bAgentEnabled) == 0x0);
        static_assert(offsetof(source2sdk::navlib::CNavHullVData, m_agentRadius) == 0x4);
        static_assert(offsetof(source2sdk::navlib::CNavHullVData, m_agentHeight) == 0x8);
        static_assert(offsetof(source2sdk::navlib::CNavHullVData, m_agentShortHeightEnabled) == 0xc);
        static_assert(offsetof(source2sdk::navlib::CNavHullVData, m_agentShortHeight) == 0x10);
        static_assert(offsetof(source2sdk::navlib::CNavHullVData, m_agentMaxClimb) == 0x14);
        static_assert(offsetof(source2sdk::navlib::CNavHullVData, m_agentMaxSlope) == 0x18);
        static_assert(offsetof(source2sdk::navlib::CNavHullVData, m_agentMaxJumpDownDist) == 0x1c);
        static_assert(offsetof(source2sdk::navlib::CNavHullVData, m_agentMaxJumpHorizDistBase) == 0x20);
        static_assert(offsetof(source2sdk::navlib::CNavHullVData, m_agentMaxJumpUpDist) == 0x24);
        static_assert(offsetof(source2sdk::navlib::CNavHullVData, m_agentBorderErosion) == 0x28);
        static_assert(offsetof(source2sdk::navlib::CNavHullVData, m_flowMapGenerationEnabled) == 0x2c);
        static_assert(offsetof(source2sdk::navlib::CNavHullVData, m_flowMapNodeMaxRadius) == 0x30);
        
        static_assert(sizeof(source2sdk::navlib::CNavHullVData) == 0x34);
    };
};
