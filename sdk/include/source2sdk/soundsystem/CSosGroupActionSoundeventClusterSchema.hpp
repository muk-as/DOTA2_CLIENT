#pragma once
#include "source2sdk/soundsystem/CSosGroupActionSchema.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x48
    // Has VTable
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    #pragma pack(push, 1)
    class CSosGroupActionSoundeventClusterSchema : public soundsystem::CSosGroupActionSchema
    {
    public:
        // metadata: MPropertyFriendlyName "Minimum Nearby Soundevents"
        int32_t m_nMinNearby; // 0x18        
        // metadata: MPropertyFriendlyName "Search Radius to Cluster Soundevents"
        float m_flClusterEpsilon; // 0x1c        
        // metadata: MPropertyFriendlyName "'Should Play' Opvar Name"
        CUtlString m_shouldPlayOpvar; // 0x20        
        // metadata: MPropertyFriendlyName "'Should Play Cluster Child' Opvar Name"
        CUtlString m_shouldPlayClusterChild; // 0x28        
        // metadata: MPropertyFriendlyName "Cluster Size Opvar Name"
        CUtlString m_clusterSizeOpvar; // 0x30        
        // metadata: MPropertyFriendlyName "'Group Box Mins' Opvar Name"
        CUtlString m_groupBoundingBoxMinsOpvar; // 0x38        
        // metadata: MPropertyFriendlyName "'Group Box Maxs' Opvar Name"
        CUtlString m_groupBoundingBoxMaxsOpvar; // 0x40        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSosGroupActionSoundeventClusterSchema because it is not a standard-layout class
    static_assert(sizeof(CSosGroupActionSoundeventClusterSchema) == 0x48);
};
