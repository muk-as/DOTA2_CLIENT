#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/CSosGroupActionSchema.hpp"
#include "source2sdk/soundsystem/SosActionSortType_t.hpp"

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
        // static metadata: M_LEGACY_OptInToSchemaPropertyDomain
        #pragma pack(push, 1)
        class CSosGroupActionSetSoundeventParameterSchema : public source2sdk::soundsystem::CSosGroupActionSchema
        {
        public:
            // metadata: MPropertyFriendlyName "Max Count"
            std::int32_t m_nMaxCount; // 0x_            
            // metadata: MPropertyFriendlyName "Minimum Value"
            float m_flMinValue; // 0x_            
            // metadata: MPropertyFriendlyName "Maximum Value"
            float m_flMaxValue; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Parameter Name"
            CUtlString m_opvarName; // 0x_            
            // metadata: MPropertyFriendlyName "Sort Type"
            source2sdk::soundsystem::SosActionSortType_t m_nSortType; // 0x_            
            uint8_t _pad_[0x_];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CSosGroupActionSetSoundeventParameterSchema because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionSetSoundeventParameterSchema) == 0x_);
    };
};
