#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/ActionType_t.hpp"

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
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertyElementNameFn
        // static metadata: M_LEGACY_OptInToSchemaPropertyDomain
        #pragma pack(push, 1)
        class CSosGroupActionSchema
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MPropertyFriendlyName "Name"
            CUtlString m_name; // 0x_            
            // metadata: MPropertyFriendlyName "Action Type"
            source2sdk::soundsystem::ActionType_t m_actionType; // 0x_            
            // metadata: MPropertySuppressField
            source2sdk::soundsystem::ActionType_t m_actionInstanceType; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::CSosGroupActionSchema, m_name) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosGroupActionSchema, m_actionType) == 0x_);
        static_assert(offsetof(source2sdk::soundsystem::CSosGroupActionSchema, m_actionInstanceType) == 0x_);
        
        static_assert(sizeof(source2sdk::soundsystem::CSosGroupActionSchema) == 0x_);
    };
};
