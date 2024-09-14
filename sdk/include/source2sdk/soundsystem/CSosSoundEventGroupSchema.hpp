#pragma once
#include "source2sdk/soundsystem/CSosGroupBranchPattern.hpp"
#include "source2sdk/soundsystem/CSosGroupMatchPattern.hpp"
#include "source2sdk/soundsystem/SosGroupType_t.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::soundsystem
{
    class CSosGroupActionSchema;
};

namespace source2sdk::soundsystem
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0xe0
    // Construct allowed
    // 
    // static metadata: MGetKV3ClassDefaults
    // static metadata: MPropertyElementNameFn
    #pragma pack(push, 1)
    class CSosSoundEventGroupSchema
    {
    public:
        // metadata: MPropertyFriendlyName "Group Name"
        CUtlString m_name; // 0x0        
        // metadata: MPropertyFriendlyName "Group Type"
        soundsystem::SosGroupType_t m_nType; // 0x8        
        // metadata: MPropertyFriendlyName "Blocks Events"
        bool m_bIsBlocking; // 0xc        
        [[maybe_unused]] std::uint8_t pad_0x0d[0x3]; // 0xd
        // metadata: MPropertyFriendlyName "Block Max Count"
        int32_t m_nBlockMaxCount; // 0x10        
        // metadata: MPropertyFriendlyName "Invert Match"
        bool m_bInvertMatch; // 0x14        
        [[maybe_unused]] std::uint8_t pad_0x15[0x3]; // 0x15
        // metadata: MPropertyFriendlyName "Match Rules"
        soundsystem::CSosGroupMatchPattern m_matchPattern; // 0x18        
        // metadata: MPropertyFriendlyName "Branch Rules"
        soundsystem::CSosGroupBranchPattern m_branchPattern; // 0x48        
        // metadata: MPropertyFriendlyName "Member Lifespan Time"
        float m_flLifeSpanTime; // 0x58        
        [[maybe_unused]] std::uint8_t pad_0x5c[0x64]; // 0x5c
        // metadata: MPropertyFriendlyName "Actions"
        soundsystem::CSosGroupActionSchema* m_vActions[4]; // 0xc0        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CSosSoundEventGroupSchema because it is not a standard-layout class
    static_assert(sizeof(CSosSoundEventGroupSchema) == 0xe0);
};
