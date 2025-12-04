#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/CSosGroupBranchPattern.hpp"
#include "source2sdk/soundsystem/CSosGroupMatchPattern.hpp"
#include "source2sdk/soundsystem/SosGroupType_t.hpp"
namespace source2sdk
{
    namespace soundsystem
    {
        struct CSosGroupActionSchema;
    };
};

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
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyElementNameFn
        // static metadata: M_LEGACY_OptInToSchemaPropertyDomain
        #pragma pack(push, 1)
        class CSosSoundEventGroupSchema
        {
        public:
            // metadata: MPropertyFriendlyName "Group Name"
            CUtlString m_name; // 0x_            
            // metadata: MPropertyFriendlyName "Group Type"
            source2sdk::soundsystem::SosGroupType_t m_nType; // 0x_            
            // metadata: MPropertyFriendlyName "Blocks Events"
            bool m_bIsBlocking; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Block Max Count"
            std::int32_t m_nBlockMaxCount; // 0x_            
            // metadata: MPropertyFriendlyName "Invert Match"
            bool m_bInvertMatch; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Match Rules"
            source2sdk::soundsystem::CSosGroupMatchPattern m_matchPattern; // 0x_            
            // metadata: MPropertyFriendlyName "Branch Rules"
            source2sdk::soundsystem::CSosGroupBranchPattern m_branchPattern; // 0x_            
            // metadata: MPropertyFriendlyName "Member Lifespan Time"
            float m_flLifeSpanTime; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Actions"
            source2sdk::soundsystem::CSosGroupActionSchema* m_vActions[4]; // 0x_            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosSoundEventGroupSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosSoundEventGroupSchema) == 0x_);
    };
};
