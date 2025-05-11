#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/networksystem/ChangeAccessorFieldPathIndex_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: entity2
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace entity2
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x78
        // 
        // static metadata: MNetworkVarNames "int32 m_nameStringableIndex"
        #pragma pack(push, 1)
        class CEntityIdentity
        {
        public:
            uint8_t _pad0000[0x14]; // 0x0
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "entityIdentityNameChanged"
            std::int32_t m_nameStringableIndex; // 0x14            
            CUtlSymbolLarge m_name; // 0x18            
            CUtlSymbolLarge m_designerName; // 0x20            
            uint8_t _pad0028[0x8]; // 0x28
            std::uint32_t m_flags; // 0x30            
            uint8_t _pad0034[0x4]; // 0x34
            WorldGroupId_t m_worldGroupId; // 0x38            
            std::uint32_t m_fDataObjectTypes; // 0x3c            
            source2sdk::networksystem::ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x40            
            uint8_t _pad0044[0x14]; // 0x44
            source2sdk::entity2::CEntityIdentity* m_pPrev; // 0x58            
            source2sdk::entity2::CEntityIdentity* m_pNext; // 0x60            
            source2sdk::entity2::CEntityIdentity* m_pPrevByClass; // 0x68            
            source2sdk::entity2::CEntityIdentity* m_pNextByClass; // 0x70            
            
            // Datamap fields:
            // void m_pAttributes; // 0x48
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_nameStringableIndex) == 0x14);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_name) == 0x18);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_designerName) == 0x20);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_flags) == 0x30);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_worldGroupId) == 0x38);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_fDataObjectTypes) == 0x3c);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_PathIndex) == 0x40);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_pPrev) == 0x58);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_pNext) == 0x60);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_pPrevByClass) == 0x68);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_pNextByClass) == 0x70);
        
        static_assert(sizeof(source2sdk::entity2::CEntityIdentity) == 0x78);
    };
};
