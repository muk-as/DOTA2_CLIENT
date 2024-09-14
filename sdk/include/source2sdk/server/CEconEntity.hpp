#pragma once
#include "source2sdk/server/CAttributeContainer.hpp"
#include "source2sdk/server/CBaseFlex.hpp"
#include "source2sdk/source2gen.hpp"
#include <cstddef>
#include <cstdint>

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk::server
{
    class CBaseEntity;
};

namespace source2sdk::server
{
    // Registered alignment: 0x8
    // Alignment: 0x8
    // Standard-layout class: false
    // Size: 0x968
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    // 
    // static metadata: MNetworkVarNames "CAttributeContainer m_AttributeManager"
    #pragma pack(push, 1)
    class CEconEntity : public server::CBaseFlex
    {
    public:
        [[maybe_unused]] std::uint8_t pad_0x828[0x10]; // 0x828
        // metadata: MNetworkEnable
        server::CAttributeContainer m_AttributeManager; // 0x838        
        // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hOldProvidee;
        char m_hOldProvidee[0x4]; // 0x960        
        int32_t m_iOldOwnerClass; // 0x964        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CEconEntity because it is not a standard-layout class
    static_assert(sizeof(CEconEntity) == 0x968);
};
