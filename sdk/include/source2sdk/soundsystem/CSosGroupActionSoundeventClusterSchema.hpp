#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/CSosGroupActionSchema.hpp"

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x_
        // Alignment: 0x_
        // Standard-layout class: false
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyFriendlyName "Soundevent Cluster"
        #pragma pack(push, 1)
        class CSosGroupActionSoundeventClusterSchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            // metadata: MPropertyFriendlyName "Minimum Nearby Soundevents"
            std::int32_t m_nMinNearby; // 0x_            
            // metadata: MPropertyFriendlyName "Search Radius to Cluster Soundevents"
            float m_flClusterEpsilon; // 0x_            
            // metadata: MPropertyFriendlyName "'Should Play' Opvar Name"
            CUtlString m_shouldPlayOpvar; // 0x_            
            // metadata: MPropertyFriendlyName "'Should Play Cluster Child' Opvar Name"
            CUtlString m_shouldPlayClusterChild; // 0x_            
            // metadata: MPropertyFriendlyName "Cluster Size Opvar Name"
            CUtlString m_clusterSizeOpvar; // 0x_            
            // metadata: MPropertyFriendlyName "'Group Box Mins' Opvar Name"
            CUtlString m_groupBoundingBoxMinsOpvar; // 0x_            
            // metadata: MPropertyFriendlyName "'Group Box Maxs' Opvar Name"
            CUtlString m_groupBoundingBoxMaxsOpvar; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionSoundeventClusterSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionSoundeventClusterSchema) == 0x_);
    };
};
