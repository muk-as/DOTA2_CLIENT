#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CDOTABehaviorMoveTo.hpp"
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
        // Registered alignment: unknown
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorCommandMoveToNPCToGive
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x_            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x_]; // 0x_            
            std::int32_t m_nMovementState; // 0x_            
            // m_hItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hItem;
            char m_hItem[0x_]; // 0x_            
            float m_flRange; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_MoveTo) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_hTarget) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_nMovementState) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_hItem) == 0x_);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_flRange) == 0x_);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive) == 0x_);
    };
};
