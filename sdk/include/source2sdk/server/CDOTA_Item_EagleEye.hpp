#pragma once
#include "source2sdk/server/CDOTA_Item.hpp"
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
    // Size: 0x658
    // Has VTable
    // Construct allowed
    // MClassHasEntityLimitedDataDesc
    // MNetworkAssumeNotNetworkable
    #pragma pack(push, 1)
    class CDOTA_Item_EagleEye : public server::CDOTA_Item
    {
    public:
        int32_t m_iTempViewer; // 0x648        
        int32_t m_iTeam; // 0x64c        
        int32_t m_nFXIndex; // 0x650        
        // m_hThinker has a template type with potentially unknown template parameters. You can try uncommenting the field below.
        // CHandle<server::CBaseEntity> m_hThinker;
        char m_hThinker[0x4]; // 0x654        
    };
    #pragma pack(pop)
    
    // Cannot assert offsets of fields in CDOTA_Item_EagleEye because it is not a standard-layout class
    static_assert(sizeof(CDOTA_Item_EagleEye) == 0x658);
};
