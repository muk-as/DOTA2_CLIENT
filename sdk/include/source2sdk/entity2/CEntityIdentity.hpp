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
        // Alignment: 0x_
        // Standard-layout class: true
        // Size: 0x_
        // 
        // static metadata: MNetworkVarNames "int32 m_nameStringableIndex"
        #pragma pack(push, 1)
        class CEntityIdentity
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "entityIdentityNameChanged"
            std::int32_t m_nameStringableIndex; // 0x_            
            CUtlSymbolLarge m_name; // 0x_            
            CUtlSymbolLarge m_designerName; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            std::uint32_t m_flags; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            WorldGroupId_t m_worldGroupId; // 0x_            
            std::uint32_t m_fDataObjectTypes; // 0x_            
            source2sdk::networksystem::ChangeAccessorFieldPathIndex_t m_PathIndex; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CEntityIdentity* m_pPrev; // 0x_            
            source2sdk::entity2::CEntityIdentity* m_pNext; // 0x_            
            source2sdk::entity2::CEntityIdentity* m_pPrevByClass; // 0x_            
            source2sdk::entity2::CEntityIdentity* m_pNextByClass; // 0x_            
            
            // Datamap fields:
            // void m_pAttributes; // 0x_
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_nameStringableIndex) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_name) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_designerName) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_flags) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_worldGroupId) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_fDataObjectTypes) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_PathIndex) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_pPrev) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_pNext) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_pPrevByClass) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityIdentity, m_pNextByClass) == 0x_);
        
        static_assert(sizeof(source2sdk::entity2::CEntityIdentity) == 0x_);
    };
};
