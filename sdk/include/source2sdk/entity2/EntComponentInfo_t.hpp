#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace entity2
    {
        struct CEntityComponentHelper;
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x68
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct EntComponentInfo_t
        {
        public:
            char* m_pName; // 0x0            
            char* m_pCPPClassname; // 0x8            
            char* m_pNetworkDataReferencedDescription; // 0x10            
            char* m_pNetworkDataReferencedPtrPropDescription; // 0x18            
            std::int32_t m_nRuntimeIndex; // 0x20            
            std::uint32_t m_nFlags; // 0x24            
            uint8_t _pad0028[0x38]; // 0x28
            source2sdk::entity2::CEntityComponentHelper* m_pBaseClassComponentHelper; // 0x60            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::entity2::EntComponentInfo_t, m_pName) == 0x0);
        static_assert(offsetof(source2sdk::entity2::EntComponentInfo_t, m_pCPPClassname) == 0x8);
        static_assert(offsetof(source2sdk::entity2::EntComponentInfo_t, m_pNetworkDataReferencedDescription) == 0x10);
        static_assert(offsetof(source2sdk::entity2::EntComponentInfo_t, m_pNetworkDataReferencedPtrPropDescription) == 0x18);
        static_assert(offsetof(source2sdk::entity2::EntComponentInfo_t, m_nRuntimeIndex) == 0x20);
        static_assert(offsetof(source2sdk::entity2::EntComponentInfo_t, m_nFlags) == 0x24);
        static_assert(offsetof(source2sdk::entity2::EntComponentInfo_t, m_pBaseClassComponentHelper) == 0x60);
        
        static_assert(sizeof(source2sdk::entity2::EntComponentInfo_t) == 0x68);
    };
};
