#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CLogicalEntity.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

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
        class CLogicBranch : public source2sdk::server::CLogicalEntity
        {
        public:
            bool m_bInValue; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            // m_Listeners has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<CHandle<source2sdk::server::CBaseEntity>> m_Listeners;
            char m_Listeners[0x_]; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnTrue; // 0x_            
            source2sdk::entity2::CEntityIOOutput m_OnFalse; // 0x_            
            
            // Datamap fields:
            // bool InputSetValue; // 0x_
            // bool InputSetValueTest; // 0x_
            // void InputToggle; // 0x_
            // void InputToggleTest; // 0x_
            // void InputTest; // 0x_
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CLogicBranch because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CLogicBranch) == 0x_);
    };
};
