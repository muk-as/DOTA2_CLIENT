#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace entity2
    {
        struct CEntityIdentity;
    };
};
namespace source2sdk
{
    namespace entity2
    {
        struct CScriptComponent;
    };
};

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
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // 
        // static metadata: MNetworkVarNames "CEntityIdentity * m_pEntity"
        // static metadata: MNetworkVarNames "CScriptComponent::Storage_t m_CScriptComponent"
        #pragma pack(push, 1)
        class CEntityInstance
        {
        public:
            uint8_t _pad_[0x_]; // 0x_
            CUtlSymbolLarge m_iszPrivateVScripts; // 0x_            
            // metadata: MNetworkEnable
            // metadata: MNetworkPriority "56"
            source2sdk::entity2::CEntityIdentity* m_pEntity; // 0x_            
            uint8_t _pad_[0x_]; // 0x_
            source2sdk::entity2::CScriptComponent* m_CScriptComponent; // 0x_            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::CEntityInstance, m_iszPrivateVScripts) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityInstance, m_pEntity) == 0x_);
        static_assert(offsetof(source2sdk::entity2::CEntityInstance, m_CScriptComponent) == 0x_);
        
        static_assert(sizeof(source2sdk::entity2::CEntityInstance) == 0x_);
    };
};
