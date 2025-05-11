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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x158
        // Has VTable
        #pragma pack(push, 1)
        class CDOTABehaviorCommandMoveToNPCToGive
        {
        public:
            uint8_t _pad0000[0x68]; // 0x0
            source2sdk::server::CDOTABehaviorMoveTo m_MoveTo; // 0x68            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x148            
            std::int32_t m_nMovementState; // 0x14c            
            // m_hItem has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hItem;
            char m_hItem[0x4]; // 0x150            
            float m_flRange; // 0x154            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_MoveTo) == 0x68);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_hTarget) == 0x148);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_nMovementState) == 0x14c);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_hItem) == 0x150);
        static_assert(offsetof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive, m_flRange) == 0x154);
        
        static_assert(sizeof(source2sdk::server::CDOTABehaviorCommandMoveToNPCToGive) == 0x158);
    };
};
