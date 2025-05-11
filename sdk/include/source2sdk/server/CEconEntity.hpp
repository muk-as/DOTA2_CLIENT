#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAttributeContainer.hpp"
#include "source2sdk/server/CBaseFlex.hpp"
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x9a0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
        #pragma pack(push, 1)
        class CEconEntity : public source2sdk::server::CBaseFlex
        {
        public:
            uint8_t _pad0848[0x10]; // 0x848
            // metadata: MNetworkEnable
            source2sdk::server::CAttributeContainer m_AttributeManager; // 0x858            
            // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOldProvidee;
            char m_hOldProvidee[0x4]; // 0x998            
            std::int32_t m_iOldOwnerClass; // 0x99c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEconEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEconEntity) == 0x9a0);
    };
};
